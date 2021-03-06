/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:50 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class NSString;

@interface GEOImageServiceCalculateFreeableSizeReply : GEOXPCReply <GEOXPCReply> {

	unsigned long long _size;

}

@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)size;
-(BOOL)isValid;
-(void)setSize:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
@end

