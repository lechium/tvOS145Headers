/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:14:32 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WorkflowKit/WorkflowKit-Structs.h>
@class NSSet;

@interface WFWorkflowIconDrawerContext : NSObject {

	CGFontRef _glyphFont;
	const CTFontRef _glyphTestFont;
	NSSet* _coreGlyphsCatalogs;

}

@property (nonatomic,readonly) CGFontRef glyphFont;                        //@synthesize glyphFont=_glyphFont - In the implementation block
@property (nonatomic,readonly) NSSet * coreGlyphsCatalogs;                 //@synthesize coreGlyphsCatalogs=_coreGlyphsCatalogs - In the implementation block
@property (nonatomic,readonly) const CTFontRef glyphTestFont;              //@synthesize glyphTestFont=_glyphTestFont - In the implementation block
+(double)glyphTestFontSize;
+(id)cachedContextOrNewContext;
-(void)dealloc;
-(NSSet *)coreGlyphsCatalogs;
-(CGFontRef)glyphFont;
-(const CTFontRef)glyphTestFont;
-(const CTFontRef)newGlyphFontForSize:(double)arg1 ;
@end

