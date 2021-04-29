/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANodeIntent : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * matchingSpans; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * privacyPolicy; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeIntent;
+(id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id<SAAceSerializable>)value;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)privacyPolicy;
-(NSArray *)matchingSpans;
-(void)setMatchingSpans:(NSArray *)arg1 ;
-(void)setPrivacyPolicy:(NSArray *)arg1 ;
@end

