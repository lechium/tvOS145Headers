/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSFormatter.h>

@class NSDateComponentsFormatter;

@interface AVDurationTimeFormatter : NSFormatter {

	NSDateComponentsFormatter* _longerFormatter;
	NSDateComponentsFormatter* _shorterFormatter;

}

@property (readonly) NSDateComponentsFormatter * longerFormatter;               //@synthesize longerFormatter=_longerFormatter - In the implementation block
@property (readonly) NSDateComponentsFormatter * shorterFormatter;              //@synthesize shorterFormatter=_shorterFormatter - In the implementation block
-(id)init;
-(id)stringForObjectValue:(id)arg1 ;
-(id)stringForTimeInterval:(double)arg1 ;
-(NSDateComponentsFormatter *)longerFormatter;
-(NSDateComponentsFormatter *)shorterFormatter;
@end

