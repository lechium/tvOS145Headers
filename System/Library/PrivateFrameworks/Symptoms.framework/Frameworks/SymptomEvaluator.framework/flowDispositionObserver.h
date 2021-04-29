/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:42 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol flowDispositionObserver <NSObject>
@property (assign,nonatomic) BOOL enabled; 
@required
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1;
-(void)noteForegroundState:(BOOL)arg1 forApp:(id)arg2 hasForegroundApps:(BOOL)arg3;
-(unsigned)noteFlow:(id)arg1 snapshot:(id)arg2 present:(BOOL)arg3 trackedBy:(id)arg4;
-(void)configurePolicies:(id)arg1;
-(id)infoDir;

@end

