/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:08:34 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ByteOffsetPair : NSObject {

	unsigned long long _lineByteOffset;
	unsigned long long _nextLineByteOffset;

}

@property (assign,nonatomic) unsigned long long lineByteOffset;                  //@synthesize lineByteOffset=_lineByteOffset - In the implementation block
@property (assign,nonatomic) unsigned long long nextLineByteOffset;              //@synthesize nextLineByteOffset=_nextLineByteOffset - In the implementation block
-(unsigned long long)lineByteOffset;
-(void)setLineByteOffset:(unsigned long long)arg1 ;
-(unsigned long long)nextLineByteOffset;
-(void)setNextLineByteOffset:(unsigned long long)arg1 ;
@end

