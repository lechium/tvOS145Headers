/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:05:13 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL;

@interface WKPreviewElementInfo : NSObject <NSCopying> {

	RetainPtr<NSURL>* _linkURL;

}

@property (nonatomic,readonly) NSURL * linkURL; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)linkURL;
-(id)_initWithLinkURL:(id)arg1 ;
@end

