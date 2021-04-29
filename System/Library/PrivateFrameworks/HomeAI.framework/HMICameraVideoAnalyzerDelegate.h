/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:36 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol HMICameraVideoAnalyzerDelegate <NSObject>
@optional
-(void)analyzer:(id)arg1 didFindSignificantEvent:(id)arg2 inFragment:(id)arg3;

@required
-(void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
-(void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;

@end
