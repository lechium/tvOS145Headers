/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:57 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/TextureIO.framework/TextureIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TextureIO/TextureIO-Structs.h>
#import <libobjc.A.dylib/TXRBuffer.h>

@class NSMutableData, NSString;

@interface TXRDefaultBuffer : NSObject <TXRBuffer> {

	NSMutableData* _data;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithBytes:(void*)arg1 length:(unsigned long long)arg2 ;
-(id)map;
-(id)initWithLength:(unsigned long long)arg1 ;
-(id)initWithData:(id)arg1 zone:(NSZone*)arg2 ;
@end
