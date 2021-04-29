/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:48 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol GEOResourceRequesterProxy;
@interface GEOResourceRequester : NSObject {

	id<GEOResourceRequesterProxy> _proxy;

}
+(id)sharedRequester;
+(void)setProxyClass:(Class)arg1 ;
-(id)init;
-(id)initWithProxy:(id)arg1 ;
-(void)fetchResources:(id)arg1 force:(BOOL)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 signpostID:(unsigned long long)arg5 queue:(id)arg6 handler:(/*^block*/id)arg7 ;
-(void)fetchResources:(id)arg1 force:(BOOL)arg2 manifestConfiguration:(id)arg3 auditToken:(id)arg4 queue:(id)arg5 handler:(/*^block*/id)arg6 ;
@end
