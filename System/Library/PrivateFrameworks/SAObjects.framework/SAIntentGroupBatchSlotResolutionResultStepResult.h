/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:10 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SACommandFailed;

@interface SAIntentGroupBatchSlotResolutionResultStepResult : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * base64EncodedProtobufMessage; 
@property (nonatomic,retain) SACommandFailed * commandFailed; 
@property (nonatomic,copy) NSString * jsonEncodedSlotResolutionResult; 
@property (nonatomic,copy) NSString * keyPath; 
@property (nonatomic,copy) NSString * typeName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)batchSlotResolutionResultStepResult;
+(id)batchSlotResolutionResultStepResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)keyPath;
-(id)groupIdentifier;
-(void)setKeyPath:(NSString *)arg1 ;
-(NSString *)typeName;
-(void)setTypeName:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)base64EncodedProtobufMessage;
-(void)setBase64EncodedProtobufMessage:(NSString *)arg1 ;
-(SACommandFailed *)commandFailed;
-(void)setCommandFailed:(SACommandFailed *)arg1 ;
-(NSString *)jsonEncodedSlotResolutionResult;
-(void)setJsonEncodedSlotResolutionResult:(NSString *)arg1 ;
@end

