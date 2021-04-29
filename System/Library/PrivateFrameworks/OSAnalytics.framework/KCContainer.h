/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:33 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <OSAnalytics/OSAnalytics-Structs.h>
@class NSMutableDictionary;

@interface KCContainer : NSObject {

	unsigned _type;
	int _pid;
	int _unindexed_frames;
	int _invalid_images;
	unsigned long long _tag;
	NSMutableDictionary* _data;
	NSMutableDictionary* _truncated_threads;

}

@property (nonatomic,readonly) unsigned type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) unsigned long long tag;                               //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * data;                           //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) int pid;                                                //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * truncated_threads;              //@synthesize truncated_threads=_truncated_threads - In the implementation block
@property (assign,nonatomic) int unindexed_frames;                                   //@synthesize unindexed_frames=_unindexed_frames - In the implementation block
@property (assign,nonatomic) int invalid_images;                                     //@synthesize invalid_images=_invalid_images - In the implementation block
-(NSMutableDictionary *)data;
-(unsigned)type;
-(unsigned long long)tag;
-(int)pid;
-(void)setPid:(int)arg1 ;
-(void)omit;
-(id)initWithKCData:(kcdata_iter*)arg1 ;
-(NSMutableDictionary *)truncated_threads;
-(int)unindexed_frames;
-(void)setUnindexed_frames:(int)arg1 ;
-(int)invalid_images;
-(void)setInvalid_images:(int)arg1 ;
@end

