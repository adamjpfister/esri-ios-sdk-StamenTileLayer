//
//  StamenTiledLayer.h
//
//

#import <ArcGIS/ArcGIS.h>

@interface StamenTiledLayer : AGSTiledServiceLayer
{
@protected
    NSString *_stamenMapType;
    NSString *_tileFormat;
	AGSTileInfo* _tileInfo;
	AGSEnvelope* _fullEnvelope;
	AGSUnits _units;
    NSArray *_subdomains;
}

- (id)initWithMapType:(NSString*)mapType;

- (NSURL*)urlForTileKey:(AGSTileKey *)key;

@end
