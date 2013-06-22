/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FTServices/FTMessage.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface FTIDSMessage : FTMessage <NSCopying>
{
    NSData *_pushCert;
    struct __SecKey *_pushKey;
    struct __SecKey *_identityKey;
    NSData *_identityCert;
    struct __SecKey *_provisionKey;
    NSData *_provisionCert;
    struct __SecKey *_pushPublicKey;
    struct __SecKey *_provisionPublicKey;
    struct __SecKey *_identityPublicKey;
    NSData *_pushToken;
}

@property(copy, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;
@property(nonatomic) struct __SecKey *identityPublicKey; // @synthesize identityPublicKey=_identityPublicKey;
@property(nonatomic) struct __SecKey *provisionPublicKey; // @synthesize provisionPublicKey=_provisionPublicKey;
@property(nonatomic) struct __SecKey *pushPublicKey; // @synthesize pushPublicKey=_pushPublicKey;
@property(copy, nonatomic) NSData *provisionCertificate; // @synthesize provisionCertificate=_provisionCert;
@property(nonatomic) struct __SecKey *provisionPrivateKey; // @synthesize provisionPrivateKey=_provisionKey;
@property(copy, nonatomic) NSData *IDCertificate; // @synthesize IDCertificate=_identityCert;
@property(nonatomic) struct __SecKey *identityPrivateKey; // @synthesize identityPrivateKey=_identityKey;
@property(nonatomic) struct __SecKey *pushPrivateKey; // @synthesize pushPrivateKey=_pushKey;
@property(copy, nonatomic) NSData *pushCertificate; // @synthesize pushCertificate=_pushCert;
- (id)additionalMessageHeaders;
- (int)responseCommand;
- (int)command;
- (BOOL)wantsBinaryPush;
- (BOOL)wantsBodySignature;
- (BOOL)wantsSignature;
- (BOOL)wantsCompressedBody;
- (BOOL)wantsHTTPHeaders;
- (BOOL)wantsBagKey;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end
