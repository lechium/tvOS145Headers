/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:02:41 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSProgress.h>

@class NSProgress;

@interface _GEOMirroredProgress : NSProgress {

	NSProgress* _originalProgress;

}
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_update;
-(id)_initWithMirroredProgressForSubclasses:(id)arg1 ;
-(void)_registerForKVO;
-(void)_unregisterForKVO;
-(id)initWithMirroredProgress:(id)arg1 ;
-(void)_replaceObservedProgressWith:(id)arg1 ;
@end
