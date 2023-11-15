#include "avl.h"
#include "node.h"
#include <gtest/gtest.h>
#include <iostream>
#include <vector>

class AccountTestFixture : public testing::Test
{
public:
	AccountTestFixture();
	virtual ~AccountTestFixture();
	void SetUp() override;
	void TearDown() override;
	static void SetUpTestCase();
	static void TearDownTestCase();

protected:
	AVL avl_;
};

AccountTestFixture::AccountTestFixture()
{
	std::cout << "Constructor called\n";
}

AccountTestFixture::~AccountTestFixture()
{
	std::cout << "Destructor called\n";
}

void AccountTestFixture::SetUpTestCase()
{
	std::cout << "SetUpTestCase called\n";
}

void AccountTestFixture::TearDownTestCase()
{
	std::cout << "TearDownTestCase called\n";
}

void AccountTestFixture::SetUp()
{
	std::cout << "SetUp called\n";
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 1));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 2));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 3));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 4));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 5));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 6));
	avl_.set_root(avl_.InsertNode(avl_.get_root(), 7));
}

void AccountTestFixture::TearDown()
{
	std::cout << "TearDown called\n";
}

TEST_F(AccountTestFixture, IsEmpty)
{
	ASSERT_EQ(avl_.IsEmpty(), 0);
}

TEST_F(AccountTestFixture, get_size)
{
	// Assert
	ASSERT_EQ(7, avl_.get_size());
}

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}
