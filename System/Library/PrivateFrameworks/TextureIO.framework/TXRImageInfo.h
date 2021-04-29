/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol TXRBuffer;
@class NSError;

@interface TXRImageInfo : NSObject {

	unsigned long long _offset;
	id<TXRBuffer> _buffer;
	unsigned long long _bytesPerRow;
	unsigned long long _bytesPerImage;
	NSError* _error;

}

@property (assign,nonatomic) unsigned long long offset;                     //@synthesize offset=_offset - In the implementation block
@property (nonatomic,retain) id<TXRBuffer> buffer;                          //@synthesize buffer=_buffer - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerRow;                //@synthesize bytesPerRow=_bytesPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long bytesPerImage;              //@synthesize bytesPerImage=_bytesPerImage - In the implementation block
@property (retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id<TXRBuffer>)buffer;
-(unsigned long long)bytesPerRow;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)setBytesPerRow:(unsigned long long)arg1 ;
-(unsigned long long)bytesPerImage;
-(void)setBytesPerImage:(unsigned long long)arg1 ;
-(void)setBuffer:(id<TXRBuffer>)arg1 ;
@end

