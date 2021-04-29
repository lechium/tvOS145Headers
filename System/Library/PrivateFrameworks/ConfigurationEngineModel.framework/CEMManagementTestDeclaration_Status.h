/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString;

@interface CEMManagementTestDeclaration_Status : CEMPayloadBase {

	NSString* _statusEcho;

}

@property (nonatomic,copy) NSString * statusEcho;              //@synthesize statusEcho=_statusEcho - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildWithEcho:(id)arg1 ;
+(id)buildRequiredOnlyWithEcho:(id)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusEcho:(NSString *)arg1 ;
-(NSString *)statusEcho;
@end
