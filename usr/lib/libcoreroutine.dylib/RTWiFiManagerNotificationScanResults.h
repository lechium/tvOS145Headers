/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:54 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/libcoreroutine.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libcoreroutine.dylib/RTNotification.h>

@class NSArray;

@interface RTWiFiManagerNotificationScanResults : RTNotification {

	NSArray* _scanResults;

}

@property (nonatomic,readonly) NSArray * scanResults;              //@synthesize scanResults=_scanResults - In the implementation block
-(id)initWithScanResults:(id)arg1 ;
-(NSArray *)scanResults;
@end

