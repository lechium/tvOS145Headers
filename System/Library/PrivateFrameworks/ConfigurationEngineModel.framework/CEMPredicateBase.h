/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:18 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMPredicateBase : CEMPayloadBase {

	NSString* _payloadType;

}

@property (nonatomic,copy) NSString * payloadType;              //@synthesize payloadType=_payloadType - In the implementation block
+(id)predicateForPayload:(id)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)payloadType;
-(void)setPayloadType:(NSString *)arg1 ;
-(BOOL)evaluateWithOptions:(id)arg1 error:(id*)arg2 ;
@end

