/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:09 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSUserDefaults;

@interface PBSConferenceRoomDisplaySettings : NSObject {

	id _restrictionsObserver;
	id _conferenceRoomDisplayBackgroundPhoto;
	unsigned long long _mode;
	NSString* _conferenceRoomDisplayMessage;
	NSString* _conferenceRoomDisplayBackgroundPhotoName;
	NSString* _domain;
	NSUserDefaults* _defaults;

}

@property (nonatomic,copy,readonly) NSString * domain;                                       //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) NSUserDefaults * defaults;                                    //@synthesize defaults=_defaults - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,copy) NSString * conferenceRoomDisplayMessage;                          //@synthesize conferenceRoomDisplayMessage=_conferenceRoomDisplayMessage - In the implementation block
@property (nonatomic,copy) id conferenceRoomDisplayBackgroundPhoto; 
@property (nonatomic,copy) NSString * conferenceRoomDisplayBackgroundPhotoName;              //@synthesize conferenceRoomDisplayBackgroundPhotoName=_conferenceRoomDisplayBackgroundPhotoName - In the implementation block
+(id)sharedInstance;
+(unsigned long long)migrateWithContext:(id)arg1 error:(id*)arg2 ;
+(id)_CRDPhotoDirectoryPath;
+(id)_CRDPhotoPath;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(void)setMode:(unsigned long long)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(unsigned long long)mode;
-(NSUserDefaults *)defaults;
-(void)_refreshPropertiesWithPreferences;
-(void)_updateMode;
-(id)_backgroundPhotoNotificationKey;
-(void)_notifyBackgroundPhotoChanged;
-(void)setConferenceRoomDisplayMessage:(NSString *)arg1 ;
-(id)conferenceRoomDisplayBackgroundPhoto;
-(void)setConferenceRoomDisplayBackgroundPhoto:(id)arg1 ;
-(void)setConferenceRoomDisplayBackgroundPhotoName:(NSString *)arg1 ;
-(NSString *)conferenceRoomDisplayMessage;
-(NSString *)conferenceRoomDisplayBackgroundPhotoName;
@end

