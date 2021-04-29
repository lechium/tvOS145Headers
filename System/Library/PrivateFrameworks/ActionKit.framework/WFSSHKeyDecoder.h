/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:10:45 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSData;

@interface WFSSHKeyDecoder : NSObject {

	NSData* _data;
	unsigned long long _offset;
	unsigned long long _length;

}

@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
@property (assign,nonatomic) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) unsigned long long length;              //@synthesize length=_length - In the implementation block
-(unsigned long long)length;
-(void)setLength:(unsigned long long)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)offset;
-(void)setOffset:(unsigned long long)arg1 ;
-(void)advanceBy:(unsigned long long)arg1 ;
-(const char*)currentPointer;
-(unsigned)decodeInteger;
-(id)decodeStringWithLength:(unsigned long long)arg1 ;
-(id)decodeStringWithPrecedingLength;
-(id)decodeDataWithLength:(unsigned long long)arg1 ;
-(id)decodeDataWithPrecedingLength;
@end

