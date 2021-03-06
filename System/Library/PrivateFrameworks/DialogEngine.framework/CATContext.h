/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:28 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSDictionary;

@interface CATContext : NSObject {

	BOOL _isMultiUserEnabled;
	BOOL _requiresUserGrounding;
	unsigned _randomSeed;
	NSString* _siriLocale;
	NSString* _siriVoiceGender;
	long long _currentTime;
	NSDictionary* _userSettings;

}

@property (nonatomic,retain) NSString * siriLocale;                    //@synthesize siriLocale=_siriLocale - In the implementation block
@property (nonatomic,retain) NSString * siriVoiceGender;               //@synthesize siriVoiceGender=_siriVoiceGender - In the implementation block
@property (assign) BOOL isMultiUserEnabled;                            //@synthesize isMultiUserEnabled=_isMultiUserEnabled - In the implementation block
@property (assign) BOOL requiresUserGrounding;                         //@synthesize requiresUserGrounding=_requiresUserGrounding - In the implementation block
@property (assign) unsigned randomSeed;                                //@synthesize randomSeed=_randomSeed - In the implementation block
@property (assign) long long currentTime;                              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,retain) NSDictionary * userSettings;              //@synthesize userSettings=_userSettings - In the implementation block
-(id)init;
-(NSDictionary *)userSettings;
-(long long)currentTime;
-(void)setCurrentTime:(long long)arg1 ;
-(id)toDictionary;
-(NSString *)siriLocale;
-(void)setSiriLocale:(NSString *)arg1 ;
-(void)setUserSettings:(NSDictionary *)arg1 ;
-(BOOL)isMultiUserEnabled;
-(unsigned)randomSeed;
-(void)setRandomSeed:(unsigned)arg1 ;
-(void)setSiriVoiceGender:(NSString *)arg1 ;
-(void)setIsMultiUserEnabled:(BOOL)arg1 ;
-(void)setRequiresUserGrounding:(BOOL)arg1 ;
-(NSString *)siriVoiceGender;
-(BOOL)requiresUserGrounding;
-(id)initWithInputLocale:(id)arg1 outputVoiceLocale:(id)arg2 ;
@end

