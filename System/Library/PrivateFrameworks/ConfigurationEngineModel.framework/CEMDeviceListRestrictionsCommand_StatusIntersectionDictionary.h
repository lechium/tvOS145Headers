/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase {

	NSDictionary* _statusANY;

}

@property (nonatomic,copy) NSDictionary * statusANY;              //@synthesize statusANY=_statusANY - In the implementation block
+(id)build;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(NSDictionary *)statusANY;
-(void)setStatusANY:(NSDictionary *)arg1 ;
@end

