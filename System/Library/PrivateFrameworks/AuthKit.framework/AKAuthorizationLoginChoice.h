/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AuthKit/AuthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AKAuthorizationLoginChoice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _appleIDAuth;
	BOOL _createAppleID;
	NSString* _user;
	NSString* _site;

}

@property (nonatomic,copy) NSString * user;                                               //@synthesize user=_user - In the implementation block
@property (nonatomic,copy) NSString * site;                                               //@synthesize site=_site - In the implementation block
@property (assign,getter=isAppleIDAuthorization,nonatomic) BOOL appleIDAuth;              //@synthesize appleIDAuth=_appleIDAuth - In the implementation block
@property (assign,getter=shouldCreateAppleID,nonatomic) BOOL createAppleID;               //@synthesize createAppleID=_createAppleID - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
-(id)initWithUser:(id)arg1 site:(id)arg2 ;
-(NSString *)site;
-(void)setSite:(NSString *)arg1 ;
-(BOOL)isAppleIDAuthorization;
-(void)setAppleIDAuth:(BOOL)arg1 ;
-(BOOL)shouldCreateAppleID;
-(void)setCreateAppleID:(BOOL)arg1 ;
@end

