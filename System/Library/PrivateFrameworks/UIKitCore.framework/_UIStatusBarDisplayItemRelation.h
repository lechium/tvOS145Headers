/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:13:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSArray;

@interface _UIStatusBarDisplayItemRelation : NSObject

@property (getter=isFulfilled,nonatomic,readonly) BOOL fulfilled; 
@property (nonatomic,readonly) NSArray * itemStates; 
+(id)exclusionWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)requirementWithDisplayItemState:(id)arg1 placement:(id)arg2 ;
+(id)anyRelationWithRelations:(id)arg1 ;
+(id)allRelationWithRelations:(id)arg1 ;
-(id)description;
-(id)type;
-(BOOL)isFulfilled;
-(id)_ui_descriptionBuilder;
-(NSArray *)itemStates;
@end
