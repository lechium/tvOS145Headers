/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:00 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol TIUserModeling <NSObject>
@property (nonatomic,readonly) NSArray * contexts; 
@required
-(NSArray *)contexts;
-(id)valuesFromContext:(id)arg1;
-(void)addToDurableCounter:(int)arg1 forKey:(id)arg2;
-(void)addIntegerToTransientCounter:(int)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;
-(void)addDoubleToTransientCounter:(double)arg1 forKey:(id)arg2 andCandidateLength:(int)arg3 andContext:(id)arg4;

@end

