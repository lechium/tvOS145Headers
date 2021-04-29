/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:19 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/VUINowPlayingFeature.h>

@class NSString;

@interface VUINowPlayingTimerTriggeredFeature : NSObject <VUINowPlayingFeature> {

	BOOL _active;
	BOOL _autoRemove;
	BOOL _repeats;
	double _duration;
	id _userInfo;
	unsigned long long _type;

}

@property (assign,nonatomic) unsigned long long type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double duration;                                    //@synthesize duration=_duration - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                          //@synthesize active=_active - In the implementation block
@property (assign,getter=shouldAutoRemove,nonatomic) BOOL autoRemove;              //@synthesize autoRemove=_autoRemove - In the implementation block
@property (nonatomic,readonly) BOOL repeats;                                       //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,retain) id userInfo;                                          //@synthesize userInfo=_userInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setType:(unsigned long long)arg1 ;
-(id)userInfo;
-(unsigned long long)type;
-(void)setUserInfo:(id)arg1 ;
-(BOOL)repeats;
-(double)duration;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)shouldAutoRemove;
-(void)setAutoRemove:(BOOL)arg1 ;
-(id)initWithType:(unsigned long long)arg1 duration:(double)arg2 repeats:(BOOL)arg3 ;
@end

