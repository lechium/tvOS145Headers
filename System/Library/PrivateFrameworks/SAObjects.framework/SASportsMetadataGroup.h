/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:07 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * groupTitle; 
@property (nonatomic,copy) NSArray * metadata; 
@property (nonatomic,copy) NSNumber * selected; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)metadataGroup;
+(id)metadataGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)metadata;
-(void)setMetadata:(NSArray *)arg1 ;
-(void)setSelected:(NSNumber *)arg1 ;
-(NSNumber *)selected;
-(id)encodedClassName;
-(NSString *)groupTitle;
-(void)setGroupTitle:(NSString *)arg1 ;
@end

