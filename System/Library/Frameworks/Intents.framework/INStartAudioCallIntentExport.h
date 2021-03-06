/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:17 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray;


@protocol INStartAudioCallIntentExport <NSObject,JSExport>
@property (assign,nonatomic) long long audioRoute; 
@property (assign,nonatomic) long long destinationType; 
@property (assign,nonatomic) long long preferredCallProvider; 
@property (nonatomic,copy) NSArray * contacts; 
@property (assign,nonatomic) long long recordTypeForRedialing; 
@property (assign,setter=setTTYType:,nonatomic) long long ttyType; 
@required
-(id)init;
-(long long)destinationType;
-(void)setDestinationType:(long long)arg1;
-(long long)audioRoute;
-(void)setAudioRoute:(long long)arg1;
-(NSArray *)contacts;
-(void)setContacts:(id)arg1;
-(void)setRecordTypeForRedialing:(long long)arg1;
-(long long)recordTypeForRedialing;
-(long long)preferredCallProvider;
-(void)setPreferredCallProvider:(long long)arg1;
-(long long)ttyType;
-(void)setTTYType:(long long)arg1;

@end

