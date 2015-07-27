
#import <Foundation/Foundation.h>

// C SUGAR
#define unless(condition...) if(!(condition))
#define until(condition...) while(!(condition))

//! Project version number for ObjectiveSugar.
FOUNDATION_EXPORT double ObjectiveSugarVersionNumber;

//! Project version string for ObjectiveSugar.
FOUNDATION_EXPORT const unsigned char ObjectiveSugarVersionString[];


// OBJC SUGAR
#import "NSNumber+ObjectiveSugar.h"
#import "NSArray+ObjectiveSugar.h"
#import "NSMutableArray+ObjectiveSugar.h"
#import "NSDictionary+ObjectiveSugar.h"
#import "NSSet+ObjectiveSugar.h"
#import "NSString+ObjectiveSugar.h"
