/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:16 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class INSpeakableString;


@protocol INActivateCarSignalIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INSpeakableString * carName; 
@property (assign,nonatomic) unsigned long long signals; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(unsigned long long)signals;
-(void)setSignals:(unsigned long long)arg1;

@end

