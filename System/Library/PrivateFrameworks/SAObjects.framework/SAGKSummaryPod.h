/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:15 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SAObjects/SAGKPodView.h>

@class NSString, SAUIImageResource;

@interface SAGKSummaryPod : SAGKPodView

@property (nonatomic,copy) NSString * caption; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
+(id)summaryPod;
+(id)summaryPodWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)caption;
-(void)setCaption:(NSString *)arg1 ;
-(id)encodedClassName;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
@end

