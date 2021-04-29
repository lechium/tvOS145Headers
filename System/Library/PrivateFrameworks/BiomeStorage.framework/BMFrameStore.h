/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:11:03 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <BiomeStorage/BiomeStorage-Structs.h>
@class BMMemoryMapping, NSString, NSFileHandle;

@interface BMFrameStore : NSObject {

	unsigned _datastoreVersion;
	BMMemoryMapping* _frames;
	BMMemoryMapping* _header;
	unsigned long long _permission;
	double _lastAbsoluteTimestamp;
	unsigned _usedBytes;
	NSString* _segmentName;
	NSFileHandle* _backingFile;

}

@property (readonly) unsigned usedBytes; 
@property (nonatomic,copy) NSString * segmentName;                    //@synthesize segmentName=_segmentName - In the implementation block
@property (nonatomic,retain) NSFileHandle * backingFile;              //@synthesize backingFile=_backingFile - In the implementation block
+(SCD_Struct_BM0)segmentHeaderFromFile:(id)arg1 withVersion:(unsigned)arg2 ;
-(id)init;
-(void)dealloc;
-(void)sync;
-(NSString *)segmentName;
-(void)setSegmentName:(NSString *)arg1 ;
-(unsigned)usedBytes;
-(BOOL)resizeBackingFileTo:(unsigned long long)arg1 ;
-(NSFileHandle *)backingFile;
-(unsigned char)appendFrameHeader:(SCD_Struct_BM3*)arg1 offset:(unsigned long long*)arg2 ;
-(void)updateHeader;
-(id)initWithFileHandle:(id)arg1 maxSize:(unsigned long long)arg2 permission:(unsigned long long)arg3 datastoreVersion:(unsigned long long)arg4 ;
-(void)enumerateFromOffset:(unsigned long long)arg1 withCallback:(/*^block*/id)arg2 ;
-(unsigned char)writeFrameForBytes:(const void*)arg1 length:(unsigned long long)arg2 dataVersion:(unsigned)arg3 timestamp:(double)arg4 ;
-(void)markFrameAsRemoved:(id)arg1 ;
-(void)setBackingFile:(NSFileHandle *)arg1 ;
@end

