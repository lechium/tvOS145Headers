/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:07:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface _OSLogDirectoryReference : NSObject {

	int _fd;
	long long _etk;

}

@property (nonatomic,readonly) int fileDescriptor; 
-(void)dealloc;
-(void)close;
-(int)fileDescriptor;
-(id)initWithDescriptor:(int)arg1 ;
-(id)initWithDescriptor:(int)arg1 sandboxExtensionToken:(const char*)arg2 ;
@end

