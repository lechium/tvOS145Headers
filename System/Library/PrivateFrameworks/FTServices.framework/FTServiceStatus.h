/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:03:55 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface FTServiceStatus : NSObject {

	unsigned long long _supportedServicesFlags;
	int _supportedServicesToken;
	BOOL _blockPost;

}

@property (assign,nonatomic) int supportedServicesToken;                    //@synthesize supportedServicesToken=_supportedServicesToken - In the implementation block
@property (assign) unsigned long long supportedServicesFlags;               //@synthesize supportedServicesFlags=_supportedServicesFlags - In the implementation block
@property (assign,nonatomic) BOOL blockPost;                                //@synthesize blockPost=_blockPost - In the implementation block
@property (nonatomic,readonly) BOOL iMessageSupported; 
@property (nonatomic,readonly) BOOL faceTimeAudioSupported; 
@property (nonatomic,readonly) BOOL faceTimeMultiwaySupported; 
+(id)sharedInstance;
-(void)dealloc;
-(id)initPrivate;
-(BOOL)iMessageSupported;
-(BOOL)faceTimeAudioSupported;
-(BOOL)faceTimeMultiwaySupported;
-(void)_addObservers;
-(void)_reload;
-(void)_removeObservers;
-(unsigned long long)supportedServicesFlags;
-(unsigned long long)_noCache_supportedServicesFlags;
-(void)setSupportedServicesFlags:(unsigned long long)arg1 ;
-(BOOL)blockPost;
-(void)setSupportedServicesToken:(int)arg1 ;
-(int)supportedServicesToken;
-(void)setBlockPost:(BOOL)arg1 ;
@end

