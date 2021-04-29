/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 28, 2021 at 9:09:31 PM Mountain Standard Time
                       * Operating System: Version 14.5 (Build 18L204)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSArray, NSString;


@protocol MTLDynamicLibrarySPI <MTLDynamicLibrary>
@property (readonly) NSObject*<OS_dispatch_data> binaryData; 
@property (readonly) NSArray * exportedFunctions; 
@property (readonly) NSArray * exportedVariables; 
@property (readonly) NSArray * importedSymbols; 
@property (readonly) NSArray * importedLibraries; 
@property (readonly) NSString * libraryPath; 
@property (readonly) const SCD_Struct_MT16* libraryUUID; 
@required
-(id)formattedDescription:(unsigned long long)arg1;
-(NSArray *)importedSymbols;
-(NSArray *)importedLibraries;
-(BOOL)serializeToURL:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
-(NSObject*<OS_dispatch_data>)binaryData;
-(NSArray *)exportedFunctions;
-(NSArray *)exportedVariables;
-(NSString *)libraryPath;
-(const SCD_Struct_MT16*)libraryUUID;

@end

