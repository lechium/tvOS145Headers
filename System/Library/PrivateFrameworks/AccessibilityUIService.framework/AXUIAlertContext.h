/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:38 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUIService.framework/AccessibilityUIService
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AXUIService;
@class NSString, AXDispatchTimer, AXUIAlert, UIImage, NSDictionary;

@interface AXUIAlertContext : NSObject {

	NSString* _identifier;
	double _creationTimeInterval;
	double _fadeAnimationDuration;
	AXDispatchTimer* _showOrHideTimer;
	AXUIAlert* _alertView;
	id<AXUIService> _service;
	unsigned long long _priority;
	double _duration;
	NSString* _text;
	NSString* _subtitleText;
	UIImage* _iconImage;
	unsigned long long _type;
	NSDictionary* _userInfo;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) double creationTimeInterval;                    //@synthesize creationTimeInterval=_creationTimeInterval - In the implementation block
@property (assign,nonatomic) double fadeAnimationDuration;                   //@synthesize fadeAnimationDuration=_fadeAnimationDuration - In the implementation block
@property (nonatomic,retain) AXDispatchTimer * showOrHideTimer;              //@synthesize showOrHideTimer=_showOrHideTimer - In the implementation block
@property (nonatomic,retain) AXUIAlert * alertView;                          //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,retain) NSDictionary * userInfo;                        //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<AXUIService> service;                        //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long priority;                    //@synthesize priority=_priority - In the implementation block
@property (assign,nonatomic) double duration;                                //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSString * subtitleText;                          //@synthesize subtitleText=_subtitleText - In the implementation block
@property (nonatomic,retain) UIImage * iconImage;                            //@synthesize iconImage=_iconImage - In the implementation block
@property (assign,nonatomic) unsigned long long type;                        //@synthesize type=_type - In the implementation block
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(NSDictionary *)userInfo;
-(unsigned long long)type;
-(NSString *)identifier;
-(unsigned long long)priority;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(double)duration;
-(id<AXUIService>)service;
-(void)setDuration:(double)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setService:(id<AXUIService>)arg1 ;
-(NSString *)subtitleText;
-(void)setSubtitleText:(NSString *)arg1 ;
-(UIImage *)iconImage;
-(void)setIconImage:(UIImage *)arg1 ;
-(double)creationTimeInterval;
-(void)setCreationTimeInterval:(double)arg1 ;
-(double)fadeAnimationDuration;
-(void)setFadeAnimationDuration:(double)arg1 ;
-(AXDispatchTimer *)showOrHideTimer;
-(void)setShowOrHideTimer:(AXDispatchTimer *)arg1 ;
-(AXUIAlert *)alertView;
-(void)setAlertView:(AXUIAlert *)arg1 ;
@end
