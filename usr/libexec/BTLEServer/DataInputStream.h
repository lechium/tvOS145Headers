//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSInputStream;

@interface DataInputStream : NSObject
{
    NSInputStream *_stream;	// 8 = 0x8
    long long _byteOrder;	// 16 = 0x10
}

+ (id)inputStreamWithData:(id)arg1 byteOrder:(long long)arg2;	// IMP=0x000000010002b778
+ (id)inputStreamWithData:(id)arg1;	// IMP=0x000000010002b720
- (void).cxx_destruct;	// IMP=0x000000010002ba84
@property(nonatomic) long long byteOrder; // @synthesize byteOrder=_byteOrder;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream=_stream;
- (_Bool)readString:(id)arg1;	// IMP=0x000000010002b954
- (_Bool)readUint32:(unsigned int *)arg1;	// IMP=0x000000010002b8c8
- (_Bool)readUint16:(unsigned short *)arg1;	// IMP=0x000000010002b838
- (_Bool)readUint8:(char *)arg1;	// IMP=0x000000010002b7dc
- (id)initWithValue:(id)arg1 byteOrder:(long long)arg2;	// IMP=0x000000010002b660

@end

