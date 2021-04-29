/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableData;

@interface GEONetworkDataReader : NSObject {

	NSMutableData* _data;
	unsigned long long _dataLength;
	const void* _bytes;
	unsigned long long _bookmarkOffset;
	unsigned long long _offset;

}
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(id)readString;
-(BOOL)readUnsignedShort:(unsigned short*)arg1 ;
-(id)allData;
-(void)appendNetworkData:(id)arg1 ;
-(BOOL)readUnsignedInt:(unsigned*)arg1 ;
-(id)readData:(unsigned)arg1 ;
-(void)markOffset;
-(void)seekToMarkedOffset;
-(BOOL)hasUnreadData;
@end
