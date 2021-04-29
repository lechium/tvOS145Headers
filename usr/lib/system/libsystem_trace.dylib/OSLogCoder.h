/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:01:25 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /usr/lib/system/libsystem_trace.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libsystem_trace.dylib/libsystem_trace.dylib-Structs.h>
#import <libobjc.A.dylib/OSLogCoder.h>

@protocol OSLogCoder
@required
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2;

@end


@interface OSLogCoder : NSObject <OSLogCoder> {

	SCD_Struct_OS0* _fmt_cmd;
	os_trace_blob_s* _ob;
	os_trace_blob_s* _ob_pub;
	os_trace_blob_s* _ob_priv;
	unsigned char _privacy_level;
	os_trace_blob_s* _ob_mask;
	char _maskbuf[128];
	unsigned long long _maxsz;
	unsigned short _written;
	unsigned short _offset;
	BOOL _truncated;
	BOOL _initialized;
	BOOL _mask;

}
-(void)setTruncated;
-(void)setPublic;
-(void)appendBytes:(const void*)arg1 length:(unsigned long long)arg2 ;
-(void)_initBlob;
@end

