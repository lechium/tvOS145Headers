/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:06:02 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVKit/AVKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface AVChapter : NSObject <NSCopying> {

	UIImage* _image;
	/*^block*/id _imageBlock;
	double _startTime;
	double _duration;
	unsigned long long _number;
	NSString* _title;

}

@property (readonly) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
@property (readonly) double duration;                        //@synthesize duration=_duration - In the implementation block
@property (readonly) unsigned long long number;              //@synthesize number=_number - In the implementation block
@property (copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (readonly) UIImage * image;                        //@synthesize image=_image - In the implementation block
+(void)initialize;
+(id)playbackChapterWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
+(id)chapterAtTime:(double)arg1 inChapters:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
-(unsigned long long)number;
-(double)duration;
-(NSString *)title;
-(UIImage *)image;
-(id)initWithStartTime:(double)arg1 duration:(double)arg2 number:(unsigned long long)arg3 title:(id)arg4 imageFaultBlock:(/*^block*/id)arg5 ;
@end

