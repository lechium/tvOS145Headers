/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:20 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INTimer, NSNumber;


@protocol INResumeTimerIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INTimer * targetTimer; 
@property (nonatomic,copy) NSNumber * resumeMultiple; 
@required
-(id)init;
-(INTimer *)targetTimer;
-(void)setTargetTimer:(id)arg1;
-(NSNumber *)resumeMultiple;
-(void)setResumeMultiple:(id)arg1;

@end

