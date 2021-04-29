/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:29 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <DiskImages2/DiskImages2-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSUUID;

@interface BackendXPC : NSObject <NSSecureCoding, NSCoding> {

	unique_ptr<crypto::header, std::__1::default_delete<crypto::header>>* _cryptoHeader;
	shared_ptr<Backend>* _backend;

}

@property (assign,nonatomic) shared_ptr<Backend>* backend;              //@synthesize backend=_backend - In the implementation block
@property (nonatomic,readonly) NSUUID * instanceID; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)instanceID;
-(shared_ptr<Backend>*)backend;
-(void)setBackend:(shared_ptr<Backend>*)arg1 ;
-(id)initWithBackend:(shared_ptr<Backend>*)arg1 ;
-(unique_ptr<crypto::header, std::__1::default_delete<crypto::header>>*)getCryptoHeader;
-(BOOL)checkIfEncryptedWithErrno:(int*)arg1 ;
@end
