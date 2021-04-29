/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface CKOperationGroupSystemImposedInfo : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _networkServiceTypePerConfig;
	long long _expectedSendSize;
	long long _expectedReceiveSize;

}

@property (nonatomic,copy) NSDictionary * networkServiceTypePerConfig;              //@synthesize networkServiceTypePerConfig=_networkServiceTypePerConfig - In the implementation block
@property (assign,nonatomic) long long expectedSendSize;                            //@synthesize expectedSendSize=_expectedSendSize - In the implementation block
@property (assign,nonatomic) long long expectedReceiveSize;                         //@synthesize expectedReceiveSize=_expectedReceiveSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)expectedSendSize;
-(long long)expectedReceiveSize;
-(NSDictionary *)networkServiceTypePerConfig;
-(void)setExpectedSendSize:(long long)arg1 ;
-(void)setExpectedReceiveSize:(long long)arg1 ;
-(void)setNetworkServiceTypePerConfig:(NSDictionary *)arg1 ;
@end
