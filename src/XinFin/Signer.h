// Copyright © 2017-2020 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "../Data.h"
#include "../PrivateKey.h"
#include "../proto/XinFin.pb.h"

namespace TW::XinFin {

/// Helper class that performs XinFin transaction signing.
class Signer {
public:
    /// Hide default constructor
    Signer() = delete;

    /// Signs a Proto::SigningInput transaction
    static Proto::SigningOutput sign(const Proto::SigningInput& input) noexcept;
};

} // namespace TW::XinFin

/// Wrapper for C interface.
struct TWXinFinSigner {
    TW::XinFin::Signer impl;
};