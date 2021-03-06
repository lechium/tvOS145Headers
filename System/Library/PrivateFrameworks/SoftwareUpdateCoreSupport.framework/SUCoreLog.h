/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:12:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_os_log;
@class NSObject, NSString;

@interface SUCoreLog : NSObject {

	NSObject*<OS_os_log> _oslog;
	NSString* _category;

}

@property (nonatomic,retain,readonly) NSObject*<OS_os_log> oslog;              //@synthesize oslog=_oslog - In the implementation block
@property (nonatomic,retain,readonly) NSString * category;                     //@synthesize category=_category - In the implementation block
+(id)sharedLogger;
-(NSString *)category;
-(id)initWithCategory:(id)arg1 ;
-(NSObject*<OS_os_log>)oslog;
@end

