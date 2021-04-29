/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:43 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFContentItem.h>

@class NSArray;

@interface WFChooseFromListArrayContentItem : WFContentItem

@property (nonatomic,readonly) NSArray * items; 
+(id)ownedTypes;
+(id)itemWithObjects:(id)arg1 named:(id)arg2 ;
+(id)itemWithItems:(id)arg1 named:(id)arg2 ;
-(NSArray *)items;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(id)allowedClassesForDecodingInternalRepresentations;
@end
