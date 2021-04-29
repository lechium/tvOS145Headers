/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:12 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/DuetActivityScheduler
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface _DASWidgetInfo : NSObject {

	BOOL _inStack;
	NSString* _widgetID;
	long long _pageID;
	NSString* _extensionBundleID;
	double _timeUntilContentExpiration;

}

@property (nonatomic,retain) NSString * widgetID;                            //@synthesize widgetID=_widgetID - In the implementation block
@property (assign,nonatomic) BOOL inStack;                                   //@synthesize inStack=_inStack - In the implementation block
@property (assign,nonatomic) long long pageID;                               //@synthesize pageID=_pageID - In the implementation block
@property (nonatomic,retain) NSString * extensionBundleID;                   //@synthesize extensionBundleID=_extensionBundleID - In the implementation block
@property (assign,nonatomic) double timeUntilContentExpiration;              //@synthesize timeUntilContentExpiration=_timeUntilContentExpiration - In the implementation block
-(void)setPageID:(long long)arg1 ;
-(long long)pageID;
-(NSString *)extensionBundleID;
-(void)setExtensionBundleID:(NSString *)arg1 ;
-(NSString *)widgetID;
-(void)setWidgetID:(NSString *)arg1 ;
-(BOOL)inStack;
-(void)setInStack:(BOOL)arg1 ;
-(double)timeUntilContentExpiration;
-(void)setTimeUntilContentExpiration:(double)arg1 ;
@end

