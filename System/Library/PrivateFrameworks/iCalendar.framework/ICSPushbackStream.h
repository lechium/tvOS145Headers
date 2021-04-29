/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:04:24 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/ICSInputByteStream.h>

@protocol ICSInputByteStream;
@class NSString;

@interface ICSPushbackStream : NSObject <ICSInputByteStream> {

	id<ICSInputByteStream> _underStream;
	char* _pbData;
	int _pbCursor;
	BOOL _readPastEOS;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(char)peek;
-(char)read;
-(BOOL)eos;
-(id)initWithInputStream:(id)arg1 ;
-(BOOL)pushBack:(char)arg1 ;
@end

