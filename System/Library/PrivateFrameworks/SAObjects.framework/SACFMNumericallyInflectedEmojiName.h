/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SACFMNumericallyInflectedEmojiName : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * withEmoji; 
@property (nonatomic,copy) NSString * withoutEmoji; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)numericallyInflectedEmojiName;
+(id)numericallyInflectedEmojiNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)withEmoji;
-(void)setWithEmoji:(NSString *)arg1 ;
-(NSString *)withoutEmoji;
-(void)setWithoutEmoji:(NSString *)arg1 ;
@end

