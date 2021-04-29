/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:14 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INIntent, INIntentResponse, NSDateInterval;


@protocol INInteractionExport <NSObject,JSExport>
@property (nonatomic,copy) INIntent * intent; 
@property (nonatomic,copy) INIntentResponse * intentResponse; 
@property (nonatomic,copy) NSDateInterval * dateInterval; 
@required
-(id)init;
-(NSDateInterval *)dateInterval;
-(void)setDateInterval:(id)arg1;
-(void)setIntent:(id)arg1;
-(INIntent *)intent;
-(INIntentResponse *)intentResponse;
-(void)setIntentResponse:(id)arg1;

@end

