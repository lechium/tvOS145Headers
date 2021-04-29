/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SADomainCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSData, NSString;

@interface SASExtractSpeechDataCompleted : SADomainCommand <SAAceSerializable>

@property (nonatomic,copy) NSData * speechData; 
@property (nonatomic,copy) NSString * speechDataUrl; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)extractSpeechDataCompleted;
+(id)extractSpeechDataCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)speechData;
-(void)setSpeechData:(NSData *)arg1 ;
-(NSString *)speechDataUrl;
-(void)setSpeechDataUrl:(NSString *)arg1 ;
@end

