#pragma once
#include <fc/exception/exception.hpp>
namespace bts { namespace wallet {
  FC_DECLARE_EXCEPTION( wallet_exception,        20000, "wallet error" );
  FC_DECLARE_DERIVED_EXCEPTION( invalid_password,        bts::wallet::wallet_exception, 20001, "invalid password" );
  FC_DECLARE_DERIVED_EXCEPTION( login_required,          bts::wallet::wallet_exception, 20003, "login required" );
  FC_DECLARE_DERIVED_EXCEPTION( wallet_already_exists,   bts::wallet::wallet_exception, 20004, "wallet already exists" );
  FC_DECLARE_DERIVED_EXCEPTION( no_such_wallet,          bts::wallet::wallet_exception, 20005, "wallet does not exist" );
  FC_DECLARE_DERIVED_EXCEPTION( unknown_receive_account, bts::wallet::wallet_exception, 20006, "unknown receive account" );
  FC_DECLARE_DERIVED_EXCEPTION( unknown_account,         bts::wallet::wallet_exception, 20007, "unknown account" );
  FC_DECLARE_DERIVED_EXCEPTION( wallet_closed,           bts::wallet::wallet_exception, 20008, "wallet_closed" );
  FC_DECLARE_DERIVED_EXCEPTION( negative_bid,            bts::wallet::wallet_exception, 20009, "negative_bid" );
  FC_DECLARE_DERIVED_EXCEPTION( invalid_price,           bts::wallet::wallet_exception, 20009, "negative_bid" );
  // registered in wallet.cpp
} } // bts::wallet
